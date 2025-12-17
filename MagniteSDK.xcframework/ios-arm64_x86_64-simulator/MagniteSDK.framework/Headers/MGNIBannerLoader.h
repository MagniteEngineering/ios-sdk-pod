//
//  MGNIBannerLoader.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.3

#import <Foundation/Foundation.h>
#import "MGNIBannerSize.h"
#import "MGNIAdPreferences.h"
#import "MGNIBannerView.h"
#import "MGNIInlineView.h"

#ifndef MGNIBannerLoader_h
#define MGNIBannerLoader_h

@class MGNIBannerViewCreator;

typedef void (^MGNIBannerRequestCompletion)(MGNIBannerViewCreator * _Nullable, NSError * _Nullable);

/*!
 @class
 @brief This class can be used to load banner ad without creating MGNIBannerView and rendering ad in it.
 @discussion Commonly used for mediation adapters.
 */
@interface MGNIBannerLoader : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Creates banner loader for specified banner size with ad preferences
 * @discussion Call this method to create banner loader for specified banner size with custom ad preferences.
 * @param size Banner size
 * @param adPreferences Custom ad preferences
 * @return MGNIBannerLoader instance
 */
- (nonnull instancetype)initWithSize:(MGNIBannerSize)size
                       adPreferences:(nullable MGNIAdPreferences *)adPreferences;

/*!
 * @brief Creates banner loader with ad preferences and ADM
 * @discussion Call this method to create banner loader with custom ad preferences and ADM
 * @param adPreferences Custom ad preferences
 * @param adm Ad markup produced by Magnite for bidding flow
 * @return MGNIBannerLoader instance
 */
- (nonnull instancetype)initWithAdPreferences:(nullable MGNIAdPreferences *)adPreferences
                                          adm:(nullable NSString *)adm;

/*!
 * @brief Loads banner ad
 * @discussion Call this method to load banner ad.
 * @param completion Block that will be called once banner ad is loaded or failed to load
 */
- (void)loadAdWithCompletion:(nonnull MGNIBannerRequestCompletion)completion;

/// Banner size
@property (nonatomic, assign) MGNIBannerSize bannerSize;
/// Custom ad preferences
@property (nonatomic, nullable, strong) MGNIAdPreferences *adPreferences;

@end

/*!
 @class
 @brief This class is used to create MGNIBannerView after MGNIBannerLoader finishes loading.
 @discussion Object of this class is sent as parameter in completion block of MGNIBannerLoader's loadAdWithCompletion: method. Don't create it by yourself.
 */
@interface MGNIBannerViewCreator : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;

/*!
 * @brief Creates MGNIBannerView.
 * @discussion Call this method to create MGNIBannerView in MGNIBannerLoader's completion block.
 * @param bannerDelegate Delegate object that will receive banner view callbacks
 * @param supportAutolayout Flag that affects returned banner will support autolayout or not
 * @return MGNIBannerView if supportAutolayout is NO. MGNIInlineView if supportAutolayout is YES
 */
- (nonnull MGNIBannerViewBase *)createBannerViewForDelegate:(nullable id<MGNIBannerDelegateProtocol>)bannerDelegate supportAutolayout:(BOOL)supportAutolayout;

@end
#endif /* MGNIBannerLoader_h */
