//
//  MGNISDK.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.3

#import <Foundation/Foundation.h>
#import "MGNIAd.h"


typedef enum {
    MGNIGender_Undefined = 0,
    MGNIGender_Female = 1,
    MGNIGender_Male = 2
} MGNIGender;


@interface MGNISDKPreferences : NSObject

/// User age
@property (nonatomic, assign) NSUInteger age;

/// User age as string
@property (nonatomic, strong) NSString *ageStr;

/// User gender
@property (nonatomic, assign) MGNIGender gender;

/*!
 * @brief MGNISDKPreferences custructor
 * @discussion Creates MGNISDKPreferences instance with age and gender.
 * @param age User age
 * @param gender User gender
 * @return MGNISDKPreferences instance with provided age and gender
 */
+ (instancetype)prefrencesWithAge:(NSUInteger)age andGender:(MGNIGender)gender;

/*!
 * @brief MGNISDKPreferences custructor
 * @discussion Creates MGNISDKPreferences instance with age string and gender.
 * @param ageStr User age as string
 * @param gender User gender
 * @return MGNISDKPreferences instance with provided age string and gender
 */
+ (instancetype)prefrencesWithAgeStr:(NSString *)ageStr andGender:(MGNIGender)gender;

@end


@interface MGNISDK : NSObject

/// Your Application ID
@property (nonatomic, strong) NSString *appID;

/// Your Developer ID
@property (nonatomic, strong) NSString *devID;

/// SDK preferences
@property (nonatomic, strong) MGNISDKPreferences *preferences;

/// SDK version
@property (nonatomic, readonly) NSString *version;


/// Use this flag to turn embeded consent dialog on or off. Turned on by default.
@property (nonatomic, assign) BOOL consentDialogEnabled;

/// This flag allows you to receive test campaigns to test your integrations. Shoud be turned off before submitting to AppStore. Turned off by default.
@property (nonatomic, assign) BOOL testAdsEnabled;

@property (nonatomic, readonly) NSString *biddingToken;

/*!
 * @brief MGNISDK singleton method
 * @return MGNISDK instance
 */
+ (MGNISDK *)sharedInstance;

/*!
 * @brief Initializes SDK with Developer ID and Application ID
 * @discussion Call this method to start working with SDK and set Developer ID and Application ID.
 * @param devID Your Developer ID
 * @param appID Current Application ID
 */
- (void)SDKInitialize:(NSString *)devID andAppID:(NSString *)appID;

/*!
 * @brief Adds/removes extra parameters to an ad request
 * @discussion Call this method to pass varios sdk settings such as us-privacy-string
 */
- (void)handleExtras:(void(^)(NSMutableDictionary<NSString*, id>*))block;

- (void)inAppPurchaseMade;
- (void)inAppPurchaseMadeWithAmount:(CGFloat)amount;
- (void)startNewSession;

/*!
 * @brief Notifies SDK that user consent (GDPR) was given or changed
 * @discussion Use this method to provide user consent (GDPR) to SDK.
 * @param consent User consent flag
 * @param consentType User consent key. "pas" in case of GDPR
 * @param ts Timestamp representing the specific time a consent was given by the user
 */
- (void)setUserConsent:(BOOL)consent forConsentType:(NSString *)consentType withTimestamp:(long)ts;

/*!
 * @brief Notifies SDK that application uses wrappers (e.g. Unity)
 * @discussion Use this method to notify SDK that you use wrappers.
 * @param wrapperName Short name of the wrapper (e.g. "Unity")
 * @param versionString Wrapper version string
 */
- (void)addWrapperWithName:(NSString *)wrapperName version:(NSString *)versionString;

/*!
 * @brief Notifies SDK that application uses mediation (e.g. AdMob, MoPub, IronSource, AppLovin MAX or others). Also enables mediation mode.
 * @discussion Use this method to notify SDK that you use mediation and to enable mediation mode(to disable return ad and consent dialog).
 * @param mediationName Short name of the mediation (e.g. "Unity", "AdMob", "MoPub", "IronSource", "AppLovin" or others)
 * @param versionString Adapter version string
 */
- (void)enableMediationModeFor:(NSString *)mediationName version:(NSString *)versionString;

// Unity methods
- (void)unitySDKInitialize;
- (void)unityAppWillEnterForeground;
- (void)unityAppDidEnterBackground;
- (void)setUnitySupportedOrientations:(NSInteger)supportedOrientations;
- (void)setUnityAutoRotation:(NSInteger)autoRotation;
- (void)setUnityVersion:(NSString *)unityVersion;

@end
