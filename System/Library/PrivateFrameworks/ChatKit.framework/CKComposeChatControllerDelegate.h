/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKComposeChatControllerDelegate <NSObject,CKChatControllerDelegate>
@optional
-(void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)composeChatControllerDidCancelComposition:(id)arg1;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;

@end

