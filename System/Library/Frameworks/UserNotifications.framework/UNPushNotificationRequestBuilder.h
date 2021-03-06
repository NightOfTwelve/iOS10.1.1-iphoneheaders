/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {

	NSDictionary* _payload;
	NSString* _bundleIdentifier;
	NSString* _identifier;

}
-(id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)buildNotificationRequest;
-(id)buildSafePayload;
-(id)_sanitizeAPSDictionary:(id)arg1 ;
-(id)_sanitizeAlert:(id)arg1 ;
-(id)_sanitizeFlag:(id)arg1 ;
-(id)_sanitizeStringArray:(id)arg1 ;
-(id)_sanitizeLocalizationArgumentsArray:(id)arg1 ;
@end

