/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/ContainerMigrator.migrator/ContainerMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSArray;

@interface MCMGlobalConfiguration : NSObject {

	NSURL* _homeDirectory;
	NSURL* _installdHomeDirectory;
	NSURL* _sharedContainersDirectory;
	NSURL* _cachesDirectory;
	NSURL* _libraryDirectory;
	NSURL* _stagingDirectory;
	NSURL* _deathrowDirectory;
	NSURL* _replaceDirectory;
	NSURL* _pendingUpdatesDirectory;
	NSURL* _bundleDirectory;
	NSURL* _transientDirectory;
	NSURL* _transientBundleDirectory;
	unsigned _currentMobileUserId;
	NSMutableDictionary* _perUserConfigurations;

}

@property (readonly) NSURL * logDirectory; 
@property (readonly) NSURL * libraryDirectory; 
@property (readonly) NSURL * stagingDirectory; 
@property (readonly) NSURL * deathrowDirectory; 
@property (readonly) NSURL * replaceDirectory; 
@property (readonly) NSURL * pendingUpdatesDirectory; 
@property (readonly) NSURL * sharedContainersDirectory; 
@property (readonly) NSURL * bundleDirectory; 
@property (readonly) NSURL * transientDirectory; 
@property (readonly) NSURL * transientBundleDirectory; 
@property (readonly) NSArray * appUserDataItemNames; 
@property (nonatomic,readonly) unsigned currentMobileUserId;              //@synthesize currentMobileUserId=_currentMobileUserId - In the implementation block
+(id)sharedInstance;
-(id)containerDirectoryURLForUser:(unsigned)arg1 contentClass:(unsigned long long)arg2 transient:(BOOL)arg3 ;
-(id)globalContainerBaseURLWithContentClass:(unsigned long long)arg1 transient:(BOOL)arg2 ;
-(id)getPerUserConfigurationForCurrentMobileUser;
-(NSURL *)bundleDirectory;
-(id)getPerUserConfigurationForUserId:(unsigned)arg1 ;
-(NSURL *)deathrowDirectory;
-(NSURL *)pendingUpdatesDirectory;
-(BOOL)migrationFileExistsWithName:(id)arg1 ;
-(NSURL *)libraryDirectory;
-(NSURL *)replaceDirectory;
-(NSArray *)appUserDataItemNames;
-(NSURL *)transientBundleDirectory;
-(NSURL *)transientDirectory;
-(NSURL *)stagingDirectory;
-(NSURL *)sharedContainersDirectory;
-(unsigned)currentMobileUserId;
-(id)cachesDirectory;
-(id)init;
-(NSURL *)logDirectory;
@end
