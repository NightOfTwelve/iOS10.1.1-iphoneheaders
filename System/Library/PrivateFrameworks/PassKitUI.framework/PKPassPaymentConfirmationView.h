/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPassPaymentPayStateViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_source;
@class PKFooterTransactionView, PKPassPaymentPayStateView, NSObject, NSDate, PKPaymentService, NSString;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {

	PKFooterTransactionView* _transactionView;
	PKPassPaymentPayStateView* _payStateView;
	BOOL _animated;
	BOOL _shouldHoldCheckmark;
	BOOL _holdingCheckmark;
	NSObject*<OS_dispatch_source> _checkmarkHoldTimer;
	NSDate* _visibleDate;
	int _expressFinishedNotifyToken;
	PKPaymentService* _paymentService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2 ;
-(void)_registerForExpressFelicaTransitNotifications:(BOOL)arg1 ;
-(void)_handleNotifyToken:(int)arg1 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(void)_updateContentViewsWithFelicaProperties:(id)arg1 ;
-(void)_finishHoldingCheckmarkAfterDelay:(double)arg1 ;
-(void)_finishHoldingCheckmarkIfPossible;
-(void)_updateContentViewsWithTransaction:(id)arg1 felicaProperties:(id)arg2 ;
-(void)_updateContentViewsWithTransaction:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3 ;
@end
