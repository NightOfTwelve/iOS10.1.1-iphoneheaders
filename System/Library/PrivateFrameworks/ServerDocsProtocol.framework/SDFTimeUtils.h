/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ServerDocsProtocol/ServerDocsProtocol-Structs.h>
@interface SDFTimeUtils : NSObject
+(void)setTimeVal:(timeval*)arg1 withDate:(id)arg2 ;
+(void)setTimeSpec:(timespec*)arg1 withDate:(id)arg2 ;
+(void)setTimeVal:(timeval*)arg1 withTimeSpec:(timespec*)arg2 ;
+(void)setTimeSpec:(timespec*)arg1 withTimeVal:(timeval*)arg2 ;
+(double)timeIntervalWithTimeSpec:(timespec*)arg1 ;
+(double)timeIntervalWithTimeVal:(timeval*)arg1 ;
@end

