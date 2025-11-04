//
//  MGNIAdPreferences.h
//  MagniteSDK
//
//  Copyright (c) 2025 Magnite. All rights reserved.
//  SDK version 0.0.1

@interface MGNIUserLocation : NSObject
@property double latitude;
@property double longitude;
@end


@interface MGNIAdPreferences : NSObject
/// User location
@property (nonatomic, strong) MGNIUserLocation *userLocation;
/// Minimal cost per impression for loaded ads
@property (nonatomic, assign) double minCPM;
/// A string tag to be sent within ad request
@property (nonatomic, strong) NSString *adTag;
/// Alternative app id
@property (nonatomic, copy) NSString* customProductId;

/// Identifier of placement of the ad.
///
/// The ad which is presented to the user under the same circumstances (at the same place of the application) should have the same and unique placementId
@property (nonatomic, copy) NSString* placementId;
/*!
 * @brief Creates MGNIAdPreferences with latitude and longitude
 * @discussion Call this method to create MGNIAdPreferences with user location: latitude and longitude.
 * @param latitude User location latitude
 * @param longitude User location longitude
 * @return MGNIAdPreferences instance
 */
+ (instancetype)prefrencesWithLatitude:(double)latitude andLongitude:(double)longitude;

/*!
 * @brief Creates MGNIAdPreferences with minCPM (minimal cost per impression)
 * @discussion Call this method to create MGNIAdPreferences with minCPM.
 * @param minCPM Minimal cost per impression
 * @return MGNIAdPreferences instance
 */
+ (instancetype)preferencesWithMinCPM:(double)minCPM;

@end
