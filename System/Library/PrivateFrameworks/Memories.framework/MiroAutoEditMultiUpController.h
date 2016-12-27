/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Project, MiroMemory, NSArray, NSMutableArray;

@interface MiroAutoEditMultiUpController : NSObject {

	Project* _project;
	MiroMemory* _activeMemory;
	NSArray* _chronologicallyOrderedAssets;
	NSArray* _projectLayoutClips;
	NSMutableArray* _selectedPeers;

}

@property (nonatomic,retain) Project * project;                                   //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroMemory * activeMemory;                           //@synthesize activeMemory=_activeMemory - In the implementation block
@property (nonatomic,retain) NSArray * chronologicallyOrderedAssets;              //@synthesize chronologicallyOrderedAssets=_chronologicallyOrderedAssets - In the implementation block
@property (assign,nonatomic) NSArray * projectLayoutClips;                        //@synthesize projectLayoutClips=_projectLayoutClips - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedPeers;                      //@synthesize selectedPeers=_selectedPeers - In the implementation block
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
-(MiroMemory *)activeMemory;
-(NSMutableArray *)selectedPeers;
-(void)setSelectedPeers:(NSMutableArray *)arg1 ;
-(id)bestPeersBetweenClip:(id)arg1 and:(id)arg2 withCurrent:(id)arg3 ;
-(BOOL)clipIsMultiCandidate:(id)arg1 ;
-(BOOL)peer:(id)arg1 couldSupportAsset:(id)arg2 ;
-(id)appropriateDistancePeersFrom:(id)arg1 comparingTo:(id)arg2 ;
-(id)selectLayoutPeerFrom:(id)arg1 ;
-(int)multiUpTypeForLayoutClip:(id)arg1 andPeer:(id)arg2 ;
-(void)adjustKBRectanglesForClip:(id)arg1 animationStyle:(unsigned long long)arg2 ;
-(NSArray *)chronologicallyOrderedAssets;
-(void)setChronologicallyOrderedAssets:(NSArray *)arg1 ;
-(BOOL)selectedPeersContains:(id)arg1 ;
-(id)allowedAssetsChronologically;
-(id)bestPeersBetweenCurrent:(id)arg1 and:(id)arg2 ;
-(id)pickBetweenClipA:(id)arg1 andClipB:(id)arg2 forLayoutClip:(id)arg3 ;
-(BOOL)findMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2 ;
-(BOOL)findInEditMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2 ;
-(void)createAndReplaceMultiUpForLayoutClip:(id)arg1 ;
-(void)ensureMultiUpMovieClipIsFirstClip:(id)arg1 ;
-(id)bestPeersBeforeLayoutClip:(id)arg1 ;
-(id)bestPeersAfterLayoutClip:(id)arg1 ;
-(double)startZoomForLayoutClip:(id)arg1 ;
-(NSArray *)projectLayoutClips;
-(void)setProjectLayoutClips:(NSArray *)arg1 ;
@end
