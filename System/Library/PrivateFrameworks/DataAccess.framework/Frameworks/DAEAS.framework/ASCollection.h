/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSArray, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {

	long long _dataclass;
	NSString* _syncKey;
	NSString* _collectionId;
	NSNumber* _status;
	NSNumber* _moreAvailable;
	NSArray* _changedItems;
	NSArray* _responseItems;
	ASFolderItemsSyncResponse* _parentResponse;
	int _sniffableType;
	BOOL _checkedShouldSniffInvites;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)syncKey;
-(long long)dataclass;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)responseItems;
-(void)setResponseItems:(id)arg1 ;
-(void)setSyncKey:(id)arg1 ;
-(void)setDataclassString:(id)arg1 ;
-(void)setCollectionId:(id)arg1 ;
-(void)setChangedItems:(id)arg1 ;
-(void)setParentResponse:(id)arg1 ;
-(id)changedItems;
-(int)sniffableTypeForAccount:(id)arg1 ;
-(id)collectionId;
-(void)setMoreAvailable:(id)arg1 ;
-(id)moreAvailable;
@end

