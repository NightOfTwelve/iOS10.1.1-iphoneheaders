/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPersonalizationProfile, NSString;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSCoding, NSCopying> {

	NTPBPersonalizationProfile* _profile;

}

@property (nonatomic,copy) NTPBPersonalizationProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTPBPersonalizationProfile *)profile;
-(void)setProfile:(NTPBPersonalizationProfile *)arg1 ;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(id)initWithPersonalizationProfile:(id)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
@end
