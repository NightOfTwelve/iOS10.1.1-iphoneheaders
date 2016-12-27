/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TSWPImageBulletProvider : NSObject {

	NSMutableArray* _images;
	NSMutableArray* _filenames;

}

@property (nonatomic,readonly) NSArray * predefinedImages; 
+(id)sharedInstance;
-(id)dataForDefaultImageBulletWithContext:(id)arg1 ;
-(id)p_predefinedImageNames;
-(id)p_pathToPredefinedImages;
-(id)dataForImageBullet:(id)arg1 withContext:(id)arg2 ;
-(NSArray *)predefinedImages;
@end
