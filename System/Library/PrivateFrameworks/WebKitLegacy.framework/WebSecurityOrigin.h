/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebQuotaManager;
#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject {

	WebSecurityOriginPrivate* _private;
	id<WebQuotaManager> _applicationCacheQuotaManager;
	id<WebQuotaManager> _databaseQuotaManager;

}
+(id)webSecurityOriginFromDatabaseIdentifier:(id)arg1 ;
-(SecurityOrigin*)_core;
-(unsigned long long)quota;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)stringValue;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)usage;
-(id)host;
-(id)databaseQuotaManager;
-(void)setQuota:(unsigned long long)arg1 ;
-(id)applicationCacheQuotaManager;
-(unsigned short)port;
-(id)protocol;
-(id)_initWithWebCoreSecurityOrigin:(SecurityOrigin*)arg1 ;
-(id)databaseIdentifier;
-(id)toString;
@end
