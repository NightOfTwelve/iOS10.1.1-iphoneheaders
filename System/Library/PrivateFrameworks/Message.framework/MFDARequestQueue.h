/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {

	DAMailAccount* _account;
	NSString* _folderID;

}
-(void)dealloc;
-(id)initWithAccount:(id)arg1 folderID:(id)arg2 ;
-(id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id*)arg3 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
@end

