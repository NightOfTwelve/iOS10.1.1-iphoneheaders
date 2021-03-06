/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPActionLogging.h>

@class NSString;

@interface MPActionLogger : NSObject <MPActionLogging> {

	NSString* _modelName;

}

@property (nonatomic,retain) NSString * modelName;                  //@synthesize modelName=_modelName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)modelName;
-(void)setModelName:(NSString *)arg1 ;
-(void)logKeySet:(id)arg1 ;
-(void)logUserAction:(unsigned long long)arg1 inContext:(unsigned long long)arg2 forMessage:(id)arg3 available:(id)arg4 displayed:(id)arg5 selected:(id)arg6 ;
-(id)initWithModelName:(id)arg1 ;
@end

