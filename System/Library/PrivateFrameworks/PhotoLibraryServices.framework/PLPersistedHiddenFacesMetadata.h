/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSManagedObjectContext, NSURL;

@interface PLPersistedHiddenFacesMetadata : NSObject {

	NSArray* _hiddenFaces;
	NSManagedObjectContext* _managedObjectContext;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                                        //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSArray * hiddenFaces;                                      //@synthesize hiddenFaces=_hiddenFaces - In the implementation block
+(BOOL)isValidPath:(id)arg1 ;
+(BOOL)_isHiddenFaceMetadataExtension:(id)arg1 ;
+(id)hiddenFacesToArchiveInManagedObjectContext:(id)arg1 ;
+(BOOL)isHiddenFaceMetadataPath:(id)arg1 ;
-(id)init;
-(id)description;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)removePersistedData;
-(void)insertHiddenFacesFromDataInManagedObjectContext:(id)arg1 deferUnmatched:(BOOL)arg2 ;
-(void)_readMetadata;
-(void)_saveMetadata;
-(NSURL *)metadataURL;
-(id)_metadataData;
-(void)writePersistedData;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 metadataURL:(id)arg2 ;
-(void)setHiddenFaces:(NSArray *)arg1 ;
-(NSArray *)hiddenFaces;
@end
