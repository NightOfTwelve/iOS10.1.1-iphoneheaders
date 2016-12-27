/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKAuthorizationRequestRecord;

@interface HDRemoteAuthorizationRequestContext : NSObject {

	HKAuthorizationRequestRecord* _requestRecord;
	/*^block*/id _requestSentHandler;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HKAuthorizationRequestRecord * requestRecord;              //@synthesize requestRecord=_requestRecord - In the implementation block
@property (nonatomic,copy) id requestSentHandler;                                       //@synthesize requestSentHandler=_requestSentHandler - In the implementation block
@property (nonatomic,copy) id completion;                                               //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setRequestRecord:(HKAuthorizationRequestRecord *)arg1 ;
-(void)setRequestSentHandler:(id)arg1 ;
-(id)requestSentHandler;
-(HKAuthorizationRequestRecord *)requestRecord;
@end
