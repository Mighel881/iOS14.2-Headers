/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EFParenthesizedSQLExpression : NSObject {

	id _expressable;

}
+(id)parenthesizedValueExpressable:(id)arg1 ;
+(id)parenthesizedValueCollectionExpressable:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(id)ef_SQLExpression;
-(id)initWithExpressable:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)ef_SQLIsolatedExpression;
@end
