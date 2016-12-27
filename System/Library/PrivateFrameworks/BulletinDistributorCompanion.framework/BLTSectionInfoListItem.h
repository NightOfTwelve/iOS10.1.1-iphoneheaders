/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBSectionInfo, NSDictionary, NSString;

@interface BLTSectionInfoListItem : NSObject {

	BBSectionInfo* _sectionInfo;
	NSDictionary* _overrides;
	NSString* _universalSectionID;
	NSString* _displayName;

}

@property (retain) BBSectionInfo * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (retain) NSDictionary * overrides;                 //@synthesize overrides=_overrides - In the implementation block
@property (copy) NSString * universalSectionID;              //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (copy) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)overrides;
-(BBSectionInfo *)sectionInfo;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
@end
