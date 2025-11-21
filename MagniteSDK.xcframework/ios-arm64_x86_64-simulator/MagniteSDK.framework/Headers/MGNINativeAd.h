//
//  MGNINativeAd.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.1


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "MGNIAbstractAd.h"
#import "MGNIAdPreferences.h"

typedef NS_ENUM(NSInteger, MGNINativeAdBitmapSize) {
    MGNINativeAdBitmapSize72x72      = 0,
    MGNINativeAdBitmapSize100x100    = 1,
    /// Default size
    MGNINativeAdBitmapSize150x150    = 2,
    MGNINativeAdBitmapSize340x340    = 3,
    /// Not supported by secondaryImageSize, default will be used instead
    MGNINativeAdBitmapSize1200x628   = 4,
};

@interface MGNINativeAdPreferences : MGNIAdPreferences

/// Primary image size
@property (nonatomic, assign) MGNINativeAdBitmapSize primaryImageSize;
/// Secondary image size
@property (nonatomic, assign) MGNINativeAdBitmapSize secondaryImageSize;
/// Desired amount of native ad details in adsDetails after ad is loaded. Actual amount may be less. Default is 1
@property (nonatomic, assign) NSInteger adsNumber;
/// Flag indicating that primary and secondary images will be loaded during ad loading. Default is YES
@property (nonatomic, assign) BOOL autoBitmapDownload;

@property (nonatomic, assign) BOOL contentAd;
@end


@interface MGNINativeAd : MGNIAbstractAd

/// Native ad preferences
@property (nonatomic, strong) MGNINativeAdPreferences *preferences;
/// Flag indicating that ad finished loading
@property (nonatomic, readonly) BOOL adIsLoaded;
/// Array of loaded MGNINativeAdDetails for requested parameters
@property (nonatomic, readonly) NSMutableArray<MGNINativeAdDetails *> *adsDetails;

/*!
 * @brief Loads native ad details with default parameters
 * @discussion Call this method to load native ad details with default parameters.
 */
- (void)loadAd;

/*!
 * @brief Loads native ad details with delegate
 * @discussion Call this method to load native ad details. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 */
- (void)loadAdWithDelegate:(id<MGNIDelegateProtocol>)delegate;

/*!
 * @brief Loads native ad details with specific native ad preferences
 * @discussion Call this method to load native ad details with specific ad preferences.
 * @param nativeAdPrefs Specific native ad preferences
 */
- (void)loadAdWithNativeAdPreferences:(MGNINativeAdPreferences *)nativeAdPrefs;

/*!
 * @brief Loads native ad details with specific native ad preferences and delegate
 * @discussion Call this method to load native ad details with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param nativeAdPrefs Specific native ad preferences
 */
- (void)loadAdWithDelegate:(id<MGNIDelegateProtocol>)delegate withNativeAdPreferences:(MGNINativeAdPreferences *)nativeAdPrefs;

/*!
 * @brief Creates native ad details from ADM with specific native ad preferences and delegate
 * @discussion Call this method to create native ad details from ADM with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param nativeAdPrefs Specific native ad preferences
 * @param adm Ad markup produced by Magnite for bidding flow
 */
- (void)loadAdWithDelegate:(id<MGNIDelegateProtocol>)delegate nativeAdPreferences:(MGNINativeAdPreferences *)nativeAdPrefs adm:(NSString *)adm;

@end
