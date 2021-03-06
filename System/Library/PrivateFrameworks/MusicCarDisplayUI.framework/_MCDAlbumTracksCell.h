/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSString;

@interface _MCDAlbumTracksCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _trackNumberLabel;
	UILabel* _durationLabel;
	UIImageView* _explicitImageView;
	UIImageView* _currentlyPlayingImageView;
	BOOL _explicitContent;
	BOOL _currentlyPlaying;
	double _maximumDurationWidth;

}

@property (nonatomic,copy) NSString * trackNumberText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * durationText; 
@property (assign,nonatomic) BOOL explicitContent;                     //@synthesize explicitContent=_explicitContent - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                    //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (assign,nonatomic) double maximumDurationWidth;              //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)explicitContent;
-(void)setExplicitContent:(BOOL)arg1 ;
-(BOOL)currentlyPlaying;
-(double)maximumDurationWidth;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(void)setDurationText:(NSString *)arg1 ;
-(void)setMaximumDurationWidth:(double)arg1 ;
-(void)setTrackNumberText:(NSString *)arg1 ;
-(NSString *)trackNumberText;
-(NSString *)durationText;
@end

