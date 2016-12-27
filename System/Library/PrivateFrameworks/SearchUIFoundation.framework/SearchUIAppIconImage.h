/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUIFoundation.framework/SearchUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUIFoundation/SearchUIFoundation-Structs.h>
#import <SearchUIFoundation/SearchUISFImage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUISFImage <NSSecureCoding> {

	unsigned long long _variant;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned long long variant;              //@synthesize variant=_variant - In the implementation block
+(double)cornerRadiusForSmallSpotlightIcons;
+(double)cornerRadiusForHomeScreenIcons;
+(CGSize)homeScreenIconSize;
+(CGRect)visibleFrameForHomeScreenIcons;
+(CGRect)visibleFrameForSmallSpotlightIcons;
+(double)iconCornerRadiusForFormat:(int)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)loadImage;
-(id)generateImageWithFormat:(int)arg1 ;
-(void)setSize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize;
-(id)initWithBundleID:(id)arg1 variant:(unsigned long long)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)variant;
-(void)setVariant:(unsigned long long)arg1 ;
@end
