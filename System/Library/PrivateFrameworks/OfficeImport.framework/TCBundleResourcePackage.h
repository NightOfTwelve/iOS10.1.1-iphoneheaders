/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OISFUZipArchive, NSMutableDictionary;

@interface TCBundleResourcePackage : NSObject {

	OISFUZipArchive* mZipArchive;
	NSMutableDictionary* mEntryMap;

}
-(void)dealloc;
-(id)initWithZipArchive:(id)arg1 ;
-(id)entryWithName:(id)arg1 cacheResult:(BOOL)arg2 ;
@end
