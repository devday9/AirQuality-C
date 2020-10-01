//
//  DLDCityAirQuality.m
//  AirQuality ObjC
//
//  Created by Deven Day on 9/30/20.
//  Copyright © 2020 RYAN GREENBURG. All rights reserved.
//

#import "DLDCityAirQuality.h"
#import "DLDWeather.h"
#import "DLDPollution.h"

@implementation DLDCityAirQuality

- (instancetype)initWithCity:(NSString *)city state:(NSString *)state country:(NSString *)country weather:(DLDWeather *)weather pollution:(DLDPollution *)pollution
{
    self = [super init];
    if (self)
    {
        _city = city;
        _state = state;
        _country = country;
        _weather = weather;
        _pollution = pollution;
    }
    return self;
}

@end

@implementation  DLDCityAirQuality (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary
{
    NSString *city = dictionary[@"city"];
    NSString *state = dictionary[@"state"];
    NSString *country = dictionary[@"country"];
    
    NSDictionary *current = dictionary[@"current"];
    
    DLDWeather *weather = [[DLDWeather alloc] initWithDictionary:current[@"weather"]];
    DLDPollution *pollution = [[DLDPollution alloc] initWithDictionary:current[@"pollution"]];
    
    return [self initWithCity:city state:state country:country weather:weather pollution:pollution];
}

@end
