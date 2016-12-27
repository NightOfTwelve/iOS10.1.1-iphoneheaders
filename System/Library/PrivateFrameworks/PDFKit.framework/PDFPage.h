/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFPagePrivate, PDFDocument, NSString, NSArray, NSAttributedString, NSData;

@interface PDFPage : NSObject <NSCopying> {

	PDFPagePrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFDocument * document; 
@property (nonatomic,readonly) CGPDFPageRef pageRef; 
@property (nonatomic,readonly) NSString * label; 
@property (assign,nonatomic) long long rotation; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (assign,nonatomic) BOOL displaysAnnotations; 
@property (nonatomic,readonly) unsigned long long numberOfCharacters; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)isNativeRotationDrawingEnabledForThisThread;
+(void)setNativeRotationDrawingEnabledForThisThread:(BOOL)arg1 ;
+(id)fontWithPDFFont:(CGPDFFontRef)arg1 size:(float)arg2 ;
-(id)init;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)view;
-(id)initWithImage:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(id)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)_commonInit;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setRotation:(long long)arg1 ;
-(long long)rotation;
-(void)resetAnnotations;
-(PDFDocument *)document;
-(void)setDocument:(PDFDocument *)arg1 ;
-(id)allAnnotations;
-(unsigned long long)numberOfCharacters;
-(NSArray *)annotations;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)purgeAll;
-(NSData *)dataRepresentation;
-(void)transformContext:(CGContextRef)arg1 forBox:(long long)arg2 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(void)noteUnsupportedFeature:(id)arg1 ;
-(CGAffineTransform)getDrawingTransformForBox:(long long)arg1 ;
-(void)drawWithBox:(long long)arg1 ;
-(CGPDFPageRef)pageRef;
-(CGRect)boundsForBox:(long long)arg1 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 isThumbnail:(BOOL)arg3 ;
-(id)imageOfSize:(CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 withAnnotations:(BOOL)arg5 withDelegate:(id)arg6 ;
-(id)annotationAtPoint:(CGPoint)arg1 ;
-(id)scannedAnnotationAtPoint:(CGPoint)arg1 ;
-(id)thumbnailOfSize:(CGSize)arg1 forBox:(long long)arg2 ;
-(CFDictionaryRef)gcCreateBoxDictionary;
-(BOOL)displaysAnnotations;
-(void)setDisplaysAnnotations:(BOOL)arg1 ;
-(void)drawBurnedInAnnotationsWithBox:(long long)arg1 ;
-(BOOL)setPageRef:(CGPDFPageRef)arg1 ;
-(id)initWithPageRef:(CGPDFPageRef)arg1 ;
-(id)selectionForAll;
-(id)selectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 type:(int)arg3 ;
-(id)selectionFromPointToBottom:(CGPoint)arg1 type:(int)arg2 ;
-(id)selectionFromTopToPoint:(CGPoint)arg1 type:(int)arg2 ;
-(void)setEnqueuedForDataDetection:(BOOL)arg1 ;
-(BOOL)hasRunDataDetectors;
-(void)scanData:(id)arg1 ;
-(BOOL)enqueuedForLayout;
-(void)setEnqueuedForLayout:(BOOL)arg1 ;
-(void)pageLayoutInvokation;
-(id)selectionForRange:(NSRange)arg1 ;
-(BOOL)enqueuedForDataDetection;
-(id)scannedAnnotations;
-(BOOL)isBookmarked;
-(void)setBounds:(CGRect)arg1 forBox:(long long)arg2 ;
-(void)purgePageLayout;
-(void)drawAnnotationsWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(void)lazilyLoadAnnotationsWithView:(id)arg1 ;
-(void)getAnnotations;
-(void)getAnnotationsWithView:(id)arg1 ;
-(void)sortAnnotations:(id)arg1 ;
-(void)_drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 isThumbnail:(BOOL)arg5 withAnnotations:(BOOL)arg6 withDelegate:(id)arg7 ;
-(CGImageRef)_newCGImageWithBox:(long long)arg1 bitmapSize:(CGSize)arg2 scale:(double)arg3 offset:(CGPoint)arg4 fillBackground:(BOOL)arg5 withRotation:(BOOL)arg6 withAntialiasing:(BOOL)arg7 withAnnotations:(BOOL)arg8 withDelegate:(id)arg9 ;
-(id)imageOfSize:(CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 withAnnotations:(BOOL)arg5 ;
-(id)selectionForRangeCommon:(NSRange)arg1 isCodeRange:(BOOL)arg2 ;
-(void)loadTextChars;
-(id)createAttributedStringCP;
-(CGPDFLayoutRef)pageLayout;
-(BOOL)writeToConsumer:(CGDataConsumerRef)arg1 ;
-(CGPDFLayoutRef)pageLayoutIfAvail;
-(void)_addBox:(int)arg1 toDictionary:(CFDictionaryRef)arg2 offset:(CGPoint)arg3 ;
-(BOOL)hasCropBox;
-(BOOL)hasBleedBox;
-(BOOL)hasTrimBox;
-(BOOL)hasArtBox;
-(void)fetchPageLayoutOnThread:(id)arg1 ;
-(void)setThreadFetchingLayout:(opaque_pthread_t*)arg1 ;
-(void)setPageLayout:(CGPDFLayoutRef)arg1 ;
-(BOOL)columnAtPoint:(CGPoint)arg1 ;
-(void)addScannedAnnotation:(id)arg1 ;
-(void)scanAddedAnnotations;
-(void)drawAnnotationsWithBox:(long long)arg1 ;
-(void)lazilyLoadAnnotations;
-(void)drawWithBox:(long long)arg1 toContext:(CGContextRef)arg2 ;
-(id)noFillthumbnailOfSize:(CGSize)arg1 forBox:(long long)arg2 ;
-(id)imageOfSize:(CGSize)arg1 forBox:(long long)arg2 withRotation:(BOOL)arg3 withAntialiasing:(BOOL)arg4 ;
-(id)selectionForCodeRange:(NSRange)arg1 ;
-(id)unsupportedFeatures;
-(void)transformContextForBox:(long long)arg1 ;
-(CGAffineTransform)transformForBox:(long long)arg1 ;
-(CGRect)characterBoundsAtIndex:(long long)arg1 ;
-(long long)characterIndexAtPoint:(CGPoint)arg1 ;
-(id)selectionForRect:(CGRect)arg1 ;
-(id)selectionForWordAtPoint:(CGPoint)arg1 ;
-(id)selectionForLineAtPoint:(CGPoint)arg1 ;
-(id)selectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)setIsBookmarked:(BOOL)arg1 ;
-(BOOL)columnAtPointIfAvailable:(CGPoint)arg1 ;
-(void)setDisplaysMarkupAnnotations:(BOOL)arg1 ;
@end
