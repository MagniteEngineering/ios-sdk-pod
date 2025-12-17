//
//  MGNIAd.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.3

#import <UIKit/UIKit.h>
#import "MGNIAbstractAd.h"
#import "MGNIAdPreferences.h"

@interface MGNIAd : MGNIAbstractAd

/// Using this property you can check whether ad supports rotation
@property (nonatomic, readonly) BOOL MGNIShouldAutoRotate;

/// Parallel bidding mediation token
@property (nonatomic, readonly, copy) NSString* bidToken;

- (instancetype)init;

/*!
 * @brief Loads rewarded video ad with delegate
 * @discussion Call this method to load rewarded video ad. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 */
- (void)loadRewardedVideoAdWithDelegate:(id<MGNIDelegateProtocol>)delegate;

/*!
 * @brief Loads rewarded video ad with delegate and specific ad preferences
 * @discussion Call this method to load rewarded video ad with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param adPrefs Custom ad preferences
 */
- (void)loadRewardedVideoAdWithDelegate:(id<MGNIDelegateProtocol>)delegate withAdPreferences:(MGNIAdPreferences *)adPrefs;

/*!
 * @brief Creates rewarded video ad from ADM with delegate and specific ad preferences
 * @discussion Call this method to create rewarded video ad from ADM with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param adPrefs Custom ad preferences
 * @param adm Ad markup produced by Magnite for bidding flow
 */
- (void)loadRewardedVideoAdWithDelegate:(id<MGNIDelegateProtocol>)delegate withAdPreferences:(MGNIAdPreferences *)adPrefs adm:(NSString *)adm;

/*!
 * @brief Loads video ad
 * @discussion Call this method to load video ad.
 */
- (void)loadVideoAd;

/*!
 * @brief Loads video ad with specific ad preferences
 * @discussion Call this method to load video ad with specific ad preferences.
 * @param adPrefs Custom ad preferences
 */
- (void)loadVideoAdWithAdPreferences:(MGNIAdPreferences *)adPrefs;

/*!
 * @brief Loads video ad with delegate
 * @discussion Call this method to load video ad. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 */
- (void)loadVideoAdWithDelegate:(id<MGNIDelegateProtocol>)delegate;

/*!
 * @brief Loads video ad with delegate and specific ad preferences
 * @discussion Call this method to load video ad with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param adPrefs Custom ad preferences
 */
- (void)loadVideoAdWithDelegate:(id<MGNIDelegateProtocol>)delegate withAdPreferences:(MGNIAdPreferences *)adPrefs;

/*!
 * @brief Loads interstitial ad
 * @discussion Call this method to load interstitial ad.
 */
- (void)loadAd;

/*!
 * @brief Loads interstitial ad with specific ad preferences
 * @discussion Call this method to load interstitial ad with specific ad preferences.
 * @param adPrefs Custom ad preferences
 */
- (void)loadAdWithAdPreferences:(MGNIAdPreferences *)adPrefs;

/*!
 * @brief Loads interstitial ad with delegate
 * @discussion Call this method to load interstitial ad with delegate.
 * @param delegate Delegate object for ad events callbacks
 */
- (void)loadAdWithDelegate:(id<MGNIDelegateProtocol>)delegate;

/*!
 * @brief Loads interstitial ad with delegate and specific ad preferences
 * @discussion Call this method to load interstitial ad with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param adPrefs Custom ad preferences
 */
- (void)loadAdWithDelegate:(id<MGNIDelegateProtocol>)delegate withAdPreferences:(MGNIAdPreferences *)adPrefs;

/*!
 * @brief Creates interstitial ad from ADM with delegate and specific ad preferences
 * @discussion Call this method to create interstitial ad from ADM with specific ad preferences. Pass delegate to be notified when ad is loaded or any other events.
 * @param delegate Delegate object for ad events callbacks
 * @param adPrefs Custom ad preferences
 * @param adm Ad markup produced by Magnite for bidding flow
 */
- (void)loadAdWithDelegate:(id<MGNIDelegateProtocol>)delegate withAdPreferences:(MGNIAdPreferences *)adPrefs adm:(NSString *)adm;

/*!
 * @brief Shows loaded ad
 * @discussion Call this method to show loaded ad.
 */
- (void)showAd;

/*!
 * @brief Force closes ad
 * @discussion Call this method to force close ad.
 */
- (void)closeAd;

@end


