//
//  DLDCityAirQualityController.h
//  AirQuality ObjC
//
//  Created by Deven Day on 9/30/20.
//  Copyright © 2020 RYAN GREENBURG. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DLDCityAirQuality;

NS_ASSUME_NONNULL_BEGIN

@interface DLDCityAirQualityController : NSObject

+ (void)fetchSupportedCountries:(void (^) (NSArray<NSString *> *))completion;

+ (void)fetchSupportedStatesInCountry:(NSString *)country
                           completion:(void (^) (NSArray<NSString *> *))completion;
+
(void)fetchSupportedCitiesInState:(NSString *)state
                            country:(NSString *)country
                         completion:(void (^) (NSArray<NSString *> *))completion;

+ (void)fetchDataForCity:(NSString *)city
                   state:(NSString *) state
                 country:(NSString *)county
              completion:(void (^) (DLDCityAirQuality *))completion;
@end

NS_ASSUME_NONNULL_END
