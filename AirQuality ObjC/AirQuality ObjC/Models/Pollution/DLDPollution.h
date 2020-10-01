//
//  DLDPollution.h
//  AirQuality ObjC
//
//  Created by Deven Day on 9/30/20.
//  Copyright © 2020 RYAN GREENBURG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DLDPollution : NSObject

@property (nonatomic, readonly) NSInteger airQualityIndex;

- (instancetype)initWithInt:(NSInteger) aqi;

@end

@interface DLDPollution (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
