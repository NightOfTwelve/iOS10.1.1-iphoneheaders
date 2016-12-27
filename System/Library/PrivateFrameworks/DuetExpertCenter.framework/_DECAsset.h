/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _DECAsset : NSObject {

	NSString* _fileName;
	NSString* _resourcePath;
	/*^block*/id _onUpdate;
	int _notificationToken;

}
+(void)initialize;
+(id)bundlePath;
+(id)assetFromPlistWithClass:(Class)arg1 onUpdate:(/*^block*/id)arg2 ;
+(void)fetchAssetFromPlistWithClass:(Class)arg1 block:(/*^block*/id)arg2 ;
+(void)_downloadInitialAssetMetadata;
+(int)resourceVersion;
+(int)assetVersion;
+(void)updateAssetMetadata;
+(int)compatibilityVersion;
-(id)init;
-(void)dealloc;
-(id)path;
-(id)abGroupContents;
-(id)contentsAsDictionary;
-(id)rawContentsAsDictionary;
-(void)addUpdateBlock:(/*^block*/id)arg1 ;
-(void)_registerAssetUpdateNotification;
-(void)_unregisterAssetUpdateNotification;
-(void)_runUpdateBlock;
-(id)initWithBundlePath:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 onUpdate:(/*^block*/id)arg4 ;
-(void)addABGroupAwareUpdateBlock:(/*^block*/id)arg1 ;
-(id)initWithFileName:(id)arg1 fileExtension:(id)arg2 onUpdate:(/*^block*/id)arg3 ;
@end
