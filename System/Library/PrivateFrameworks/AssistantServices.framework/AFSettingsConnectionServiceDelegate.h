/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSettingsServiceDelegate.h>

@class AFSettingsConnection, NSString;

@interface AFSettingsConnectionServiceDelegate : NSObject <AFSettingsServiceDelegate> {

	AFSettingsConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)syncVerificationPartialResult:(id)arg1 ;
-(oneway void)syncVerificationServerReport:(id)arg1 ;
-(id)initWithSettingsConnection:(id)arg1 ;
@end

