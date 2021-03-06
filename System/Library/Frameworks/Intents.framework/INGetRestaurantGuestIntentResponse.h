/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INGetRestaurantGuestIntentResponseExport.h>

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INGetRestaurantGuestIntentResponseExport> {

	INRestaurantGuest* _guest;
	INRestaurantGuestDisplayPreferences* _guestDisplayPreferences;

}

@property (nonatomic,copy) INRestaurantGuest * guest;                                                  //@synthesize guest=_guest - In the implementation block
@property (nonatomic,copy) INRestaurantGuestDisplayPreferences * guestDisplayPreferences;              //@synthesize guestDisplayPreferences=_guestDisplayPreferences - In the implementation block
@property (nonatomic,readonly) long long code; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)code;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(INRestaurantGuest *)guest;
-(INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
-(void)setGuest:(INRestaurantGuest *)arg1 ;
-(void)setGuestDisplayPreferences:(INRestaurantGuestDisplayPreferences *)arg1 ;
@end

