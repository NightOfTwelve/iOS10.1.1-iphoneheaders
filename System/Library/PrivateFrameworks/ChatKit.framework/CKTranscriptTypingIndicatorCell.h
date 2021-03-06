/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {

	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingView;                                            //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) CALayer*<CKTypingIndicatorLayerProtocol> indicatorLayer; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setOrientation:(char)arg1 ;
-(void)prepareForReuse;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(CALayer*<CKTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)layoutSubviewsForAlignmentContents;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startShrinkAnimation;
-(void)startPulseAnimation;
-(void)configureForChatItem:(id)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setIndicatorLayer:(CALayer*<CKTypingIndicatorLayerProtocol>)arg1 ;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(CKTypingView *)typingView;
@end

