/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface AFSiriTether : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	BOOL _isAttached;
	/*^block*/id _attachmentStatusChangedHandler;
	int _notifyToken;

}
-(void)attach:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_attach:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted:(id)arg1 ;
-(void)_connectionInvalid:(id)arg1 ;
-(void)_attachmentStatusUpdate:(BOOL)arg1 ;
-(void)_listenForLaunchNotification;
-(void)waitForAttachment:(double)arg1 ;
-(void)setAttachmentStatusChangedHandler:(/*^block*/id)arg1 ;
@end

