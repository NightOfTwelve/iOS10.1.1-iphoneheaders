/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CompletionItem;
@class NSString, TopHitCompletionView, TopHitCompletionPromotionRecognizer, NSArray, NSMapTable, UIColor;

@interface UnifiedField : UITextField <UIGestureRecognizerDelegate> {

	BOOL _lastEditWasADeletion;
	NSString* _pendingTopHitNavigationText;
	id<CompletionItem> _topHit;
	TopHitCompletionView* _topHitCompletionView;
	TopHitCompletionPromotionRecognizer* _topHitCompletionPromotionRecognizer;
	NSArray* _keyCommands;
	NSMapTable* _keyCommandActions;
	NSString* _userTypedText;
	id<CompletionItem> _reflectedItem;

}

@property (assign,nonatomic,__weak) id<UnifiedFieldDelegate> delegate; 
@property (nonatomic,readonly) double placeholderHorizontalInset; 
@property (nonatomic,copy) UIColor * placeholderColor; 
@property (nonatomic,retain) id<CompletionItem> reflectedItem;                      //@synthesize reflectedItem=_reflectedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReflectedItem:(id<CompletionItem>)arg1 ;
-(void)_endEditingWithCurrentText;
-(void)_textDidChangeFromTyping;
-(unsigned long long)_unifiedFieldInputType;
-(id)_textWithoutWhitespace;
-(BOOL)_waitingForTopHitForCurrentText;
-(void)_cancelPendingTopHitNavigation;
-(id)_topHitForCurrentText;
-(void)_setTopHit:(id)arg1 ;
-(id)_textForPasteboard;
-(void)_promoteCompletionToSelection:(BOOL)arg1 andMoveForward:(BOOL)arg2 ;
-(void)_setReflectedItem:(id)arg1 updateUserTypedPrefix:(BOOL)arg2 ;
-(void)_restoreUserTypedText;
-(void)_removeTopHitCompletionView;
-(void)_promoteCompletionToSelection;
-(id)_reflectedItemCompletionString;
-(void)_layoutTopHitCompletionView;
-(void)_moveRight;
-(void)_moveLeft;
-(void)_keyPressed:(id)arg1 forEvent:(id)arg2 ;
-(void)topHitDidBecomeReady;
-(id<CompletionItem>)reflectedItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)keyCommands;
-(void)setText:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(CGRect)editRect;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(id)textInputContextIdentifier;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(BOOL)_hasContent;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(double)placeholderHorizontalInset;
-(void)_updateReturnKey;
@end
