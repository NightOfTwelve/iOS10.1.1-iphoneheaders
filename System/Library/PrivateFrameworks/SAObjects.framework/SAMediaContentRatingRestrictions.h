/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long appRestriction; 
@property (nonatomic,copy) NSString * countryCode; 
@property (assign,nonatomic) long long movieRestriction; 
@property (assign,nonatomic) long long tvRestriction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaContentRatingRestrictions;
+(id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)appRestriction;
-(void)setAppRestriction:(long long)arg1 ;
-(long long)movieRestriction;
-(void)setMovieRestriction:(long long)arg1 ;
-(long long)tvRestriction;
-(void)setTvRestriction:(long long)arg1 ;
@end
