/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest {

	long long _options;
	STAlarm* _criteria;

}

@property (assign,nonatomic) long long options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) STAlarm * criteria;              //@synthesize criteria=_criteria - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(id)createResponse;
-(STAlarm *)criteria;
-(void)setCriteria:(STAlarm *)arg1 ;
@end

