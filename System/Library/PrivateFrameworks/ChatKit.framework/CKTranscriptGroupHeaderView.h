/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class CKConversation, MFComposeRecipientTextView, UIView, UIButton, _UIBackdropView;

@interface CKTranscriptGroupHeaderView : UIView {

	CKConversation* _conversation;
	MFComposeRecipientTextView* _textView;
	UIView* _separator;
	UIButton* _actionButton;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) CKConversation * conversation;                      //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) MFComposeRecipientTextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                 //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                            //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                     //@synthesize backdropView=_backdropView - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTextView:(MFComposeRecipientTextView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(MFComposeRecipientTextView *)textView;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIButton *)actionButton;
-(id)initWithFrame:(CGRect)arg1 conversation:(id)arg2 ;
@end
