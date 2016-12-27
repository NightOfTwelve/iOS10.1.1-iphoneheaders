/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, CAShapeLayer, NSString;

@interface AEAnnotationMarker : NSObject <CALayerDelegate> {

	BOOL _strikethrough;
	int _effect;
	int _style;
	int _pageTheme;
	CALayer* _layer;
	double _contentScale;
	double _viewScale;
	CAShapeLayer* _strikethroughLayer;

}

@property (nonatomic,retain,readonly) CAShapeLayer * strikethroughLayer;              //@synthesize strikethroughLayer=_strikethroughLayer - In the implementation block
@property (nonatomic,retain,readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (assign,nonatomic) int effect;                                              //@synthesize effect=_effect - In the implementation block
@property (assign,nonatomic) double contentScale;                                     //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) double viewScale;                                        //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) int style;                                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int pageTheme;                                           //@synthesize pageTheme=_pageTheme - In the implementation block
@property (assign,nonatomic) BOOL strikethrough;                                      //@synthesize strikethrough=_strikethrough - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)p_updateLayerDimensions;
-(void)p_updateLayerColors;
-(double)p_borderWidth;
-(CGSize)p_fillSize;
-(id)p_markerColor:(id)arg1 withEffect:(int)arg2 ;
-(id)initWithAnnotationStyle:(int)arg1 contentScale:(double)arg2 ;
-(void)setStrikethrough:(BOOL)arg1 ;
-(double)viewScale;
-(BOOL)strikethrough;
-(CAShapeLayer *)strikethroughLayer;
-(void)setViewScale:(double)arg1 ;
-(CALayer *)layer;
-(void)dealloc;
-(int)style;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setStyle:(int)arg1 ;
-(CGSize)imageSize;
-(void)setEffect:(int)arg1 ;
-(int)effect;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(int)pageTheme;
-(void)setPageTheme:(int)arg1 ;
@end
