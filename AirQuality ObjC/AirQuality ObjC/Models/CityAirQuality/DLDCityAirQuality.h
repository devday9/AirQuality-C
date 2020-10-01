//
//  DLDCityAirQuality.h
//  AirQuality ObjC
//
//  Created by Deven Day on 9/30/20.
//  Copyright © 2020 RYAN GREENBURG. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DLDWeather;
@class DLDPollution;


NS_ASSUME_NONNULL_BEGIN

@interface DLDCityAirQuality : NSObject

@property (nonatomic, copy, readonly) NSString * city;
@property (nonatomic, copy, readonly) NSString * state;
@property (nonatomic, copy, readonly) NSString * country;
@property (nonatomic, copy, readonly) DLDWeather * weather;
@property (nonatomic, copy, readonly) DLDPollution * pollution;

- (instancetype)initWithCity: (NSString *)city
                       state:(NSString *)state
                     country:(NSString *)country
                     weather:(DLDWeather *)weather
                   pollution:(DLDPollution *)pollution;

@end

@interface DLDCityAirQuality (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
