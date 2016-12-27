/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartPhotoPlaybackIntentExport.h>

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;

@interface INStartPhotoPlaybackIntent : INIntent <INStartPhotoPlaybackIntentExport>

@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) CLPlacemark * locationCreated; 
@property (nonatomic,copy,readonly) NSString * albumName; 
@property (nonatomic,copy,readonly) NSArray * searchTerms; 
@property (nonatomic,readonly) long long searchTermsOperator; 
@property (nonatomic,readonly) unsigned long long includedAttributes; 
@property (nonatomic,readonly) unsigned long long excludedAttributes; 
@property (nonatomic,copy,readonly) NSArray * peopleInPhoto; 
@property (nonatomic,readonly) long long peopleInPhotoOperator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_metadata;
-(INDateComponentsRange *)dateCreated;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(NSArray *)searchTerms;
-(void)setLocationCreated:(CLPlacemark *)arg1 ;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)setIncludedAttributes:(unsigned long long)arg1 ;
-(void)setExcludedAttributes:(unsigned long long)arg1 ;
-(void)setPeopleInPhoto:(NSArray *)arg1 ;
-(CLPlacemark *)locationCreated;
-(NSArray *)peopleInPhoto;
-(unsigned long long)includedAttributes;
-(unsigned long long)excludedAttributes;
-(id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7 ;
-(long long)searchTermsOperator;
-(long long)peopleInPhotoOperator;
@end
