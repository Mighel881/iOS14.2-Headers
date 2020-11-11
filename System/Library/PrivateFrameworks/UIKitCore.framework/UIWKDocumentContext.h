/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableData, NSObject, NSAttributedString, NSString;

@interface UIWKDocumentContext : NSObject {

	BOOL _rectsAreInCharacterOrder;
	NSRange _lastRectRange;
	NSMutableData* _selectionRects;
	NSObject* _contextBefore;
	NSObject* _selectedText;
	NSObject* _contextAfter;
	NSObject* _markedText;
	NSAttributedString* _annotatedText;
	NSRange _selectedRangeInMarkedText;

}

@property (nonatomic,retain) NSMutableData * _selectionRects;                //@synthesize selectionRects=_selectionRects - In the implementation block
@property (nonatomic,readonly) NSString * _contextBeforeString; 
@property (nonatomic,readonly) NSString * _selectedTextString; 
@property (nonatomic,readonly) NSString * _contextAfterString; 
@property (nonatomic,readonly) NSString * _markedTextString; 
@property (nonatomic,copy) NSObject * contextBefore;                         //@synthesize contextBefore=_contextBefore - In the implementation block
@property (nonatomic,copy) NSObject * selectedText;                          //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSObject * contextAfter;                          //@synthesize contextAfter=_contextAfter - In the implementation block
@property (nonatomic,copy) NSObject * markedText;                            //@synthesize markedText=_markedText - In the implementation block
@property (assign,nonatomic) NSRange selectedRangeInMarkedText;              //@synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText - In the implementation block
@property (nonatomic,readonly) NSRange selectedTextRange; 
@property (nonatomic,readonly) NSRange markedTextRange; 
@property (nonatomic,copy) NSAttributedString * annotatedText;               //@synthesize annotatedText=_annotatedText - In the implementation block
-(NSObject *)selectedText;
-(NSObject *)markedText;
-(NSRange)markedTextRange;
-(id)init;
-(NSRange)selectedTextRange;
-(void)setSelectedText:(NSObject *)arg1 ;
-(NSObject *)contextAfter;
-(NSRange)deltaForSelectionRange:(NSRange)arg1 ;
-(void)resetTextRects;
-(NSString *)_contextBeforeString;
-(NSString *)_selectedTextString;
-(NSString *)_markedTextString;
-(void)set_selectionRects:(NSMutableData *)arg1 ;
-(NSMutableData *)_selectionRects;
-(void)enumerateLayoutRects:(/*^block*/id)arg1 ;
-(void)addTextRect:(CGRect)arg1 forCharacterRange:(NSRange)arg2 ;
-(void)setContextAfter:(NSObject *)arg1 ;
-(NSRange)selectedRangeInMarkedText;
-(id)characterRectsForCharacterRange:(NSRange)arg1 ;
-(void)sortTextRectsByCharacterRange;
-(NSRange)rangeContainedWithinRect:(CGRect)arg1 ;
-(void)setContextBefore:(NSObject *)arg1 ;
-(void)enumerateLayoutRectsWithOptions:(unsigned long long)arg1 characterRange:(NSRange)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)_contextAfterString;
-(unsigned long long)closestCharacterIndexForPoint:(CGPoint)arg1 ;
-(id)stringContainedWithinRect:(CGRect)arg1 ;
-(NSObject *)contextBefore;
-(void)setSelectedRangeInMarkedText:(NSRange)arg1 ;
-(NSAttributedString *)annotatedText;
-(void)setAnnotatedText:(NSAttributedString *)arg1 ;
-(void)setMarkedText:(NSObject *)arg1 ;
-(void)dealloc;
@end
