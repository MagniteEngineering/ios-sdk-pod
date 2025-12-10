//
//  MGNIBannerView.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.2


#import "MGNIBannerViewBase.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @class
 @brief This class represents Banners with size and position determined by corresponding parameters
 
 @discussion This class was designed to serve banners with typical sizes and origins, determined solely by its corresponding parameters. Banners of this class are not designed to be used with autolayout. You should use MGNIInlineView if you need banners layed-out by autolayout engine.
 */
@interface MGNIBannerView : MGNIBannerViewBase

/*!
 * @brief Creates banner view for specified size at auto origin, with ad preferences and delegate
 * @discussion Call this method to create banner view for specified size at auto origin with custom ad preferences. Pass delegate to be notified about banner view events.
 * @param size Banner size
 * @param autoOrigin Auto origin
 * @param adPreferences Custom ad preferences
 * @param bannerDelegate Delegate object that will receive banner view callbacks
 * @return MGNIBannerView instance
 */
- (nullable id)initWithSize:(MGNIBannerSize)size autoOrigin:(MGNIBannerAutoOrigin)autoOrigin adPreferences:(nullable MGNIAdPreferences *)adPreferences withDelegate:(nullable id<MGNIBannerDelegateProtocol>)bannerDelegate;

/*!
 * @brief Creates banner view from ADM at auto origin with ad preferences and delegate
 * @discussion Call this method to create banner view from ADM at auto origin with custom ad preferences. Pass delegate to be notified about banner view events.
 * @param autoOrigin Auto origin
 * @param adPreferences Custom ad preferences
 * @param bannerDelegate Delegate object that will receive banner view callbacks
 * @param adm Ad markup produced by Magnite for bidding flow
 * @return MGNIBannerView instance
 */
- (nullable id)initWithAutoOrigin:(MGNIBannerAutoOrigin)autoOrigin adPreferences:(nullable MGNIAdPreferences *)adPreferences withDelegate:(nullable id<MGNIBannerDelegateProtocol>)bannerDelegate adm:(NSString *)adm;

/*!
 * @brief Creates banner view for specified size at auto origin and with delegate
 * @discussion Call this method to create banner view for specified size at auto origin. Pass delegate to be notified about banner view events.
 * @param size Banner size
 * @param autoOrigin Auto origin
 * @param bannerDelegate Delegate object that will receive banner view callbacks
 * @return MGNIBannerView instance
 */
- (nullable id)initWithSize:(MGNIBannerSize)size autoOrigin:(MGNIBannerAutoOrigin)autoOrigin withDelegate:(nullable id<MGNIBannerDelegateProtocol>)bannerDelegate;

/*!
 * @brief Changes fixed origin
 * @discussion Call this method to change fixed origin.
 * @param origin New fixed origin
 */
- (void)setOrigin:(CGPoint)origin;

/*!
 * @brief Changes auto origin
 * @discussion Call this method to change auto origin.
 * @param autoOrigin New auto origin
 */
- (void)setMGNIAutoOrigin:(MGNIBannerAutoOrigin)autoOrigin;

@end

NS_ASSUME_NONNULL_END
