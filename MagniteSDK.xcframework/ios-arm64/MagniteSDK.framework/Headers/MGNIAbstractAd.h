//
//  MGNIAbstractAd.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.3

#import <Foundation/Foundation.h>

@class MGNIAbstractAd;
@class MGNINativeAdDetails;

@protocol MGNIDelegateProtocol <NSObject>

@optional
/*!
 * @brief Notifies delegate that ad was loaded successfully
 * @discussion This method is called when ad did finish loading successfully.
 * @param ad Ad instance that called this method
 */
- (void)didLoadAd:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that ad failed to load
 * @discussion This method is called when ad failed to load. Check error parameter to understand the reason.
 * @param ad Ad instance that called this method
 * @param error Error describing the reason. See MGNIErrorCode.h for possible error codes and localizedDescription for explanation
 */
- (void)failedLoadAd:(MGNIAbstractAd *)ad withError:(NSError *)error;

/*!
 * @brief Notifies delegate that ad did appear on screen
 * @discussion This method is called when ad did appear on screen.
 * @param ad Ad instance that called this method
 */
- (void)didShowAd:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that ad did send impression
 * @discussion This method is called when ad did appear on screen and all required conditions were met for impression to be sent.
 * @param ad Ad instance that called this method
 */
- (void)didSendImpression:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that ad failed to display
 * @discussion This method is called when ad failed to display. Check error parameter to understand the reason.
 * @param ad Ad instance that called this method
 * @param error Error describing the reason. See MGNIErrorCode.h for possible error codes and localizedDescription for explanation
 */
- (void)failedShowAd:(MGNIAbstractAd *)ad withError:(NSError *)error;

/*!
 * @brief Notifies delegate that ad was closed
 * @discussion This method is called when ad was closed.
 * @param ad Ad instance that called this method
 */
- (void)didCloseAd:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that ad was clicked
 * @discussion This method is called when ad was clicked.
 * @param ad Ad instance that called this method
 */
- (void)didClickAd:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that in-app AppStore view controller, presented after click on ad, was closed
 * @discussion This method is called when in-app AppStore view controller gets closed by cancelling it or by installing the app.
 * @param ad Ad instance that called this method
 */
- (void)didCloseInAppStore:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that rewarded video ad did complete playing video
 * @discussion This method is called when rewarded ad completes playing video
 * @param ad Ad instance that called this method
 */
- (void)didCompleteVideo:(MGNIAbstractAd *)ad;

/*!
 * @brief Notifies delegate that impression was sent for specified nativeAdDetails
 * @discussion This method is called when impression tracking view did become viewable and all required conditions were met for impression to be sent.
 * @param nativeAdDetails Native ad details instance that called this method
 */
- (void)didSendImpressionForNativeAdDetails:(MGNINativeAdDetails *)nativeAdDetails;

/*!
 * @brief Notifies delegate that nativeAdDetails was clicked
 * @discussion This method is called when click tracking view was clicked for specified nativeAdDetails.
 * @param nativeAdDetails Native ad details instance that called this method
 */
- (void)didClickNativeAdDetails:(MGNINativeAdDetails *)nativeAdDetails;

@end

@interface MGNIAbstractAd : NSObject

/*!
 * @brief Check if the ad is ready to be displayed
 * @discussion Use this method to check whether ad was loaded already and can be displayed.
 * @return Boolean value indicating that ad is ready to be displayed
 */
- (BOOL) isReady;

@end
