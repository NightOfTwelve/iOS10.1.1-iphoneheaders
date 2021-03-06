/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode, NSURL;

@interface NSURLSessionTaskDependencyTree : NSObject

@property (nonatomic,retain) NSMutableDictionary * _dependencies; 
@property (nonatomic,retain) __NSCFURLSessionTaskDependencyTreeNode * _effectiveTree; 
@property (nonatomic,retain) NSURL * mainDocumentURL; 
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
+(id)dependencyTreeDefaultWeb;
+(id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)mimeTypeForURLString:(id)arg1 ;
-(id)_parentForURLPath:(id)arg1 ;
-(id)_parentForMimeType:(id)arg1 ;
@end

