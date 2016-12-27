/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <WebUI/WBUFormAutoFillWebView.h>
#import <libobjc.A.dylib/_SFDialogPresenting.h>

@class _SFDialogView, NSString;

@interface _SFWebView : WBUFormAutoFillWebView <_SFDialogPresenting> {

	_SFDialogView* _dialogView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(int)webProcessIdentifierForDialogController:(id)arg1 ;
-(void)presentDialogView:(id)arg1 forDialogController:(id)arg2 ;
-(void)dismissDialogView:(id)arg1 forDialogController:(id)arg2 ;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
@end
