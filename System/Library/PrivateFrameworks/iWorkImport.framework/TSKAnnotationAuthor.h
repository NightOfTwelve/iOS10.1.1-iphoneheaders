/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject <TSPCopying> {

	NSString* mName;
	TSUColor* mColor;
	NSString* mPublicID;
	BOOL mIsPublicAuthor;
	NSString* _appearanceColorForAuthor;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL hasPublicID; 
@property (nonatomic,readonly) NSString * publicID; 
@property (nonatomic,readonly) BOOL isPublicAuthor; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) TSUColor * storageColor; 
@property (nonatomic,readonly) TSUColor * popoverAuthorLabelColor; 
@property (nonatomic,readonly) TSUColor * popoverButtonTintColor; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * textHighlightColor; 
@property (nonatomic,readonly) TSUColor * cellViolatorColor; 
@property (nonatomic,readonly) TSUColor * flagStrokeColor; 
@property (nonatomic,readonly) TSUColor * flagPressedColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
@property (nonatomic,readonly) TSUColor * flagFillColor; 
@property (nonatomic,readonly) TSUColor * popoverColor; 
@property (nonatomic,readonly) TSUColor * sidebarDecoratorLineColor; 
@property (nonatomic,readonly) TSUColor * sidebarHoverColor; 
@property (nonatomic,readonly) TSUColor * sidebarSelectedColor; 
@property (nonatomic,readonly) TSUColor * sidebarUsernameColor; 
@property (nonatomic,readonly) TSUColor * sidebarChangeBarColor; 
@property (nonatomic,readonly) TSUColor * sidebarSelectedBorderColor; 
@property (nonatomic,readonly) TSUColor * gradientStartColor; 
@property (nonatomic,readonly) TSUColor * gradientEndColor; 
@property (nonatomic,readonly) TSUColor * indicatorLightColor; 
@property (nonatomic,readonly) TSUColor * indicatorDarkColor; 
@property (nonatomic,readonly) NSString * authorColorName; 
@property (nonatomic,readonly) NSString * appearanceColorForAuthor;                //@synthesize appearanceColorForAuthor=_appearanceColorForAuthor - In the implementation block
@property (nonatomic,readonly) NSString * menuSwatchColorForAuthor; 
@property (nonatomic,readonly) BOOL showAuthorComments; 
+(id)normalizedAuthorNameForAuthorName:(id)arg1 ;
+(unsigned long long)presetColorCount;
+(id)authorStorageColorForIndex:(unsigned long long)arg1 ;
+(id)p_publicIDFromSeed:(id)arg1 privateID:(id)arg2 ;
+(unsigned long long)p_authorColorIndexWithColor:(id)arg1 forIndicator:(BOOL)arg2 ;
+(id)authorColorForIndex:(unsigned long long)arg1 forKey:(id)arg2 ;
+(id)authorTextMarkupColorForIndex:(unsigned long long)arg1 ;
+(id)indicatorLightColorForIndex:(unsigned long long)arg1 ;
+(id)indicatorDarkColorForIndex:(unsigned long long)arg1 ;
+(id)localizedAuthorColorNameForIndex:(unsigned long long)arg1 ;
+(id)p_authorColorDictionaryForAuthorIndex:(unsigned long long)arg1 ;
+(id)authorMenuSwatchColorForIndex:(unsigned long long)arg1 ;
+(id)indicatorLightColorByAuthorColor:(id)arg1 ;
+(id)indicatorDarkColorByLightColor:(id)arg1 ;
+(id)collaboratorCursorColorByLightColor:(id)arg1 ;
+(id)defaultAuthorName;
-(id)initFromUnarchiver:(id)arg1 ;
-(id)componentRootObject;
-(BOOL)allowsImplicitComponentOwnership;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(TSUColor *)storageColor;
-(void)setStorageColor:(TSUColor *)arg1 ;
-(BOOL)matchesPrivateID:(id)arg1 ;
-(BOOL)isPreferredOver:(id)arg1 ;
-(BOOL)hasPublicID;
-(BOOL)isPublicAuthor;
-(BOOL)matchesAuthor:(id)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 privateID:(id)arg4 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 publicID:(id)arg4 isPublicAuthor:(BOOL)arg5 ;
-(unsigned long long)p_authorColorIndex;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(TSUColor *)popoverButtonTintColor;
-(TSUColor *)popoverAuthorLabelColor;
-(TSUColor *)textMarkupColor;
-(TSUColor *)textHighlightColor;
-(TSUColor *)cellViolatorColor;
-(TSUColor *)flagStrokeColor;
-(TSUColor *)flagPressedColor;
-(TSUColor *)changeAdornmentsColor;
-(TSUColor *)flagFillColor;
-(TSUColor *)popoverColor;
-(TSUColor *)sidebarDecoratorLineColor;
-(TSUColor *)sidebarHoverColor;
-(TSUColor *)sidebarSelectedColor;
-(TSUColor *)sidebarUsernameColor;
-(TSUColor *)sidebarChangeBarColor;
-(TSUColor *)sidebarSelectedBorderColor;
-(TSUColor *)gradientStartColor;
-(TSUColor *)indicatorLightColor;
-(TSUColor *)indicatorDarkColor;
-(NSString *)authorColorName;
-(id)themeFilenameForAuthor;
-(NSString *)menuSwatchColorForAuthor;
-(BOOL)showAuthorComments;
-(NSString *)appearanceColorForAuthor;
-(NSString *)publicID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)displayName;
-(TSUColor *)gradientEndColor;
@end
