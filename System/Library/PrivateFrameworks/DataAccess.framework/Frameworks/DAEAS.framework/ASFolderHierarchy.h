/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {

	ASAccount* _account;
	NSMutableDictionary* _folderCache;
	NSMutableDictionary* _folderByIdCache;
	id _delegate;

}
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
+(id)_dataDirectoryPath;
+(id)_folderCacheFilenameWithId:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(long long)arg1 ;
-(void)blowAwayFolderCache;
-(id)folderForID:(id)arg1 ;
-(id)folderIdsForPersistentPush;
-(id)folderIdsForPersistentPushForClientID:(id)arg1 ;
-(id)folderIdsForPersistentPushForDataclasses:(long long)arg1 clientID:(id)arg2 ;
-(void)clearLocalCache;
-(id)_folderCacheFilename;
-(void)_setFolderByIdCacheFromCurrentCache;
-(void)_setFolderPathsFromCurrentCache;
-(void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
-(id)folderCache;
-(id)_pathForFolder:(id)arg1 usingCache:(id)arg2 foldersById:(id)arg3 ;
-(void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)arg1 ;
-(void)setFolderIdsThatExternalClientsCareAbout:(id)arg1 ;
-(void)_pruneBadFolderIdsThatExternalClientsCareAbout;
-(void)_setFolderCache:(id)arg1 ;
-(void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
-(id)_savedFolderPathsThatExternalClientsCareAbout;
-(void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)arg1 ;
-(id)_deviceIdInCache;
-(id)foldersUnderFolderWithID:(id)arg1 ;
-(void)setFolderCache:(id)arg1 ;
-(void)setFolderIdsForPersistentPush:(id)arg1 clientID:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(id)folders;
@end

