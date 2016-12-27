/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, SAWeatherCondition, NSString;

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * chanceOfPrecipitation; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * isUserRequested; 
@property (nonatomic,copy) NSNumber * timeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forecast;
+(id)forecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAWeatherCondition *)condition;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)chanceOfPrecipitation;
-(void)setChanceOfPrecipitation:(NSNumber *)arg1 ;
-(NSNumber *)timeIndex;
-(void)setTimeIndex:(NSNumber *)arg1 ;
-(NSNumber *)isUserRequested;
-(void)setIsUserRequested:(NSNumber *)arg1 ;
@end
