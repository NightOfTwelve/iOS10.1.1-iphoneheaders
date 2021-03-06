/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@protocol VSIdentityProviderControllerDelegate;
@class VSIdentityProvider, VSIdentityProviderRequest, VSFailable, VSIdentityProviderController;

@interface VSIdentityProviderRequestOperation : VSAsyncOperation {

	VSIdentityProvider* _identityProvider;
	VSIdentityProviderRequest* _request;
	id<VSIdentityProviderControllerDelegate> _controllerDelegate;
	VSFailable* _result;
	VSIdentityProviderController* _controller;

}

@property (nonatomic,retain) VSFailable * result;                                                             //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSIdentityProviderController * controller;                                       //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) VSIdentityProvider * identityProvider;                                         //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy,readonly) VSIdentityProviderRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<VSIdentityProviderControllerDelegate> controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
-(id)init;
-(VSIdentityProviderRequest *)request;
-(VSIdentityProviderController *)controller;
-(void)setController:(VSIdentityProviderController *)arg1 ;
-(id<VSIdentityProviderControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<VSIdentityProviderControllerDelegate>)arg1 ;
-(VSFailable *)result;
-(void)setResult:(VSFailable *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)executionDidBegin;
-(id)initWithIdentityProvider:(id)arg1 request:(id)arg2 ;
@end

