/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata {

	NSString* _albumName;
	NSNumber* _albumStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * albumName;                          //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSNumber * albumStoreID;                       //@synthesize albumStoreID=_albumStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(NSNumber *)albumStoreID;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
-(void)setAlbumStoreID:(NSNumber *)arg1 ;
@end

