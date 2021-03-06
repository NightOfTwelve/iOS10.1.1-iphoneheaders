/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebPolicyDecisionListener.h>
#import <WebKitLegacy/WebFormSubmissionListener.h>

@class NSString;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {

	RefPtr<WebCore::Frame>* _frame;
	function<void (WebCore::PolicyAction)>* _policyFunction;
	RetainPtr<NSURL>* _appLinkURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithFrame:(Frame*)arg1 policyFunction:(function<void (WebCore::PolicyAction)>*)arg2 appLinkURL:(id)arg3 ;
-(id)initWithFrame:(Frame*)arg1 policyFunction:(function<void (WebCore::PolicyAction)>*)arg2 ;
-(void)receivedPolicyDecision:(int)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)ignore;
-(void)use;
-(void)continue;
-(void)download;
@end

