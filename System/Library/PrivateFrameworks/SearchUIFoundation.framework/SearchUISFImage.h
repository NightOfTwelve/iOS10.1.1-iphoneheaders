/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUIFoundation.framework/SearchUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUIFoundation/SearchUIFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>

@class UIImage;

@interface SearchUISFImage : SFImage {

	UIImage* _uiImage;

}

@property (readonly) UIImage * uiImage; 
@property (nonatomic,retain) UIImage * uiImage;              //@synthesize uiImage=_uiImage - In the implementation block
+(id)cachedImageFromSFImage:(id)arg1 ;
+(id)imageFromData:(id)arg1 ;
+(id)templatifiedImage:(id)arg1 ;
-(CGSize)size;
-(id)initWithImage:(id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)loadImage;
-(UIImage *)uiImage;
-(void)setUiImage:(UIImage *)arg1 ;
@end

