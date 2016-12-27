/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedAsset.h>

@class NSURL, NSString, NSDictionary, UIImage;

@interface PLWallpaperAsset : PLManagedAsset

@property (nonatomic,retain) NSURL * imageURL; 
@property (nonatomic,retain) NSURL * thumbnailURL; 
@property (nonatomic,readonly) NSString * imageName; 
@property (nonatomic,retain) NSDictionary * wallpaperOptions; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIImage * thumbnailImage; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withImageURL:(id)arg2 thumbnailURL:(id)arg3 ;
+(id)entityName;
-(UIImage *)image;
-(void)awakeFromInsert;
-(id)indexSheetImage;
-(void)prepareForDeletion;
-(id)newFullScreenImage:(const _CFDictionary*)arg1 ;
-(BOOL)isIncludedInMoments;
-(id)imageWithFormat:(int)arg1 outImageProperties:(const _CFDictionary*)arg2 ;
-(id)wallpaperFullScreenImage;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)thumbnailURL;
-(NSDictionary *)wallpaperOptions;
-(void)setWallpaperOptions:(NSDictionary *)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)imageName;
-(BOOL)allowsWallpaperEditing;
-(id)imageWithFormat:(int)arg1 ;
-(NSURL *)imageURL;
@end
