//
//  DLDPollution.m
//  AirQuality ObjC
//
//  Created by Deven Day on 9/30/20.
//  Copyright © 2020 RYAN GREENBURG. All rights reserved.
//

#import "DLDPollution.h"

@implementation DLDPollution

- (instancetype)initWithInt:(NSInteger)aqi
{
    
    self = [super init];
    if (self)
    {
        _airQualityIndex = aqi;
    }
    return self;
}

@end

@implementation DLDPollution (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary
{
    NSInteger aqi = [dictionary[@"aquis"] intValue];
    return [self initWithInt:aqi];
}

@end
