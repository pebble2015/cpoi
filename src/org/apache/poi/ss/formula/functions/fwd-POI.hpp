// Forward declarations for org.apache.poi.ss.formula.functions
#pragma once


namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace functions
                    {
                        class Address;
                        class AggregateFunction;
                        class AggregateFunction_1;
                        class AggregateFunction_10;
                        class AggregateFunction_11;
                        class AggregateFunction_12;
                        class AggregateFunction_2;
                        class AggregateFunction_3;
                        class AggregateFunction_4;
                        class AggregateFunction_5;
                        class AggregateFunction_6;
                        class AggregateFunction_7;
                        class AggregateFunction_8;
                        class AggregateFunction_9;
                        class AggregateFunction_LargeSmall;
                        class AggregateFunction_Percentile;
                        class AggregateFunction_ValueCollector;
                        class AggregateFunction_subtotalInstance_13;
                        class BaseNumberUtils;
                        class Baseifs;
                        class Bin2Dec;
                        class BooleanFunction;
                        class BooleanFunction_1;
                        class BooleanFunction_2;
                        class BooleanFunction_3;
                        class BooleanFunction_4;
                        class BooleanFunction_5;
                        class CalendarFieldFunction;
                        class Choose;
                        class Code;
                        class Column;
                        class Columns;
                        class Complex;
                        class Count;
                        class CountUtils;
                        struct CountUtils_I_MatchAreaPredicate;
                        struct CountUtils_I_MatchPredicate;
                        class Count_1;
                        class Count_2;
                        class Counta;
                        class Counta_1;
                        class Counta_2;
                        class Countblank;
                        class Countblank_1;
                        class Countif;
                        class Countif_BooleanMatcher;
                        class Countif_CmpOp;
                        class Countif_ErrorMatcher;
                        class Countif_MatcherBase;
                        class Countif_NumberMatcher;
                        class Countif_StringMatcher;
                        class Countifs;
                        class DGet;
                        class DMin;
                        class DStarRunner;
                        class DStarRunner_DStarAlgorithmEnum;
                        class DStarRunner_operator;
                        class DateFunc;
                        class Days360;
                        class Dec2Bin;
                        class Dec2Hex;
                        class Delta;
                        class EDate;
                        class EOMonth;
                        class Errortype;
                        class Even;
                        class FactDouble;
                        class Finance;
                        class FinanceFunction;
                        class FinanceFunction_1;
                        class FinanceFunction_2;
                        class FinanceFunction_3;
                        class FinanceFunction_4;
                        class FinanceLib;
                        class Fixed;
                        class Fixed0ArgFunction;
                        class Fixed1ArgFunction;
                        class Fixed2ArgFunction;
                        class Fixed3ArgFunction;
                        class Fixed4ArgFunction;
                        struct FreeRefFunction;
                        struct Function;
                        struct Function0Arg;
                        struct Function1Arg;
                        struct Function2Arg;
                        struct Function3Arg;
                        struct Function4Arg;
                        class Hex2Dec;
                        class Hlookup;
                        class Hyperlink;
                        struct IDStarAlgorithm;
                        class IPMT;
                        class IfFunc;
                        class ImReal;
                        class Imaginary;
                        class Index;
                        class Indirect;
                        class Intercept;
                        class Irr;
                        class LinearRegressionFunction;
                        class LinearRegressionFunction_AreaValueArray;
                        class LinearRegressionFunction_FUNCTION;
                        class LinearRegressionFunction_RefValueArray;
                        class LinearRegressionFunction_SingleCellValueArray;
                        class LinearRegressionFunction_ValueArray;
                        class LogicalFunction;
                        class LogicalFunction_1;
                        class LogicalFunction_2;
                        class LogicalFunction_3;
                        class LogicalFunction_4;
                        class LogicalFunction_5;
                        class LogicalFunction_6;
                        class LogicalFunction_7;
                        class LogicalFunction_8;
                        class LogicalFunction_9;
                        class Lookup;
                        class LookupUtils;
                        class LookupUtils_BinarySearchIndexes;
                        class LookupUtils_BooleanLookupComparer;
                        class LookupUtils_ColumnVector;
                        class LookupUtils_CompareResult;
                        struct LookupUtils_LookupValueComparer;
                        class LookupUtils_LookupValueComparerBase;
                        class LookupUtils_NumberLookupComparer;
                        class LookupUtils_RowVector;
                        class LookupUtils_SheetVector;
                        class LookupUtils_StringLookupComparer;
                        struct LookupUtils_ValueVector;
                        class Match;
                        class Match_SingleValueVector;
                        class MathX;
                        class MinaMaxa;
                        class MinaMaxa_1;
                        class MinaMaxa_2;
                        class Mirr;
                        class Mode;
                        class MultiOperandNumericFunction;
                        class MultiOperandNumericFunction_DoubleList;
                        class Na;
                        class NotImplementedFunction;
                        class Now;
                        class Npv;
                        class NumericFunction;
                        class NumericFunction_1;
                        class NumericFunction_10;
                        class NumericFunction_11;
                        class NumericFunction_12;
                        class NumericFunction_13;
                        class NumericFunction_14;
                        class NumericFunction_15;
                        class NumericFunction_16;
                        class NumericFunction_17;
                        class NumericFunction_18;
                        class NumericFunction_19;
                        class NumericFunction_2;
                        class NumericFunction_20;
                        class NumericFunction_21;
                        class NumericFunction_22;
                        class NumericFunction_23;
                        class NumericFunction_24;
                        class NumericFunction_25;
                        class NumericFunction_26;
                        class NumericFunction_27;
                        class NumericFunction_28;
                        class NumericFunction_29;
                        class NumericFunction_3;
                        class NumericFunction_30;
                        class NumericFunction_31;
                        class NumericFunction_32;
                        class NumericFunction_33;
                        class NumericFunction_34;
                        class NumericFunction_35;
                        class NumericFunction_36;
                        class NumericFunction_4;
                        class NumericFunction_5;
                        class NumericFunction_6;
                        class NumericFunction_7;
                        class NumericFunction_8;
                        class NumericFunction_9;
                        class NumericFunction_Log;
                        class NumericFunction_OneArg;
                        class NumericFunction_TwoArg;
                        class Oct2Dec;
                        class Odd;
                        class Offset;
                        class Offset_BaseRef;
                        class Offset_LinearOffsetRange;
                        class PPMT;
                        class Quotient;
                        class Rank;
                        class Rate;
                        class Replace;
                        class Rept;
                        class Roman;
                        class RowFunc;
                        class Rows;
                        class Slope;
                        class StatsLib;
                        class Substitute;
                        class Subtotal;
                        class Sumif;
                        class Sumifs;
                        class Sumproduct;
                        class Sumx2my2;
                        class Sumx2my2_1;
                        class Sumx2py2;
                        class Sumx2py2_1;
                        class Sumxmy2;
                        class Sumxmy2_1;
                        class T;
                        class TextFunction;
                        class TextFunction_1;
                        class TextFunction_10;
                        class TextFunction_11;
                        class TextFunction_2;
                        class TextFunction_3;
                        class TextFunction_4;
                        class TextFunction_5;
                        class TextFunction_6;
                        class TextFunction_7;
                        class TextFunction_8;
                        class TextFunction_9;
                        class TextFunction_LeftRight;
                        class TextFunction_SearchFind;
                        class TextFunction_SingleArgTextFunc;
                        class TimeFunc;
                        class Today;
                        class Value;
                        class Var1or2ArgFunction;
                        class Var2or3ArgFunction;
                        class Var3or4ArgFunction;
                        class Vlookup;
                        class WeekNum;
                        class WeekdayFunc;
                        class XYNumericFunction;
                        struct XYNumericFunction_Accumulator;
                        class XYNumericFunction_AreaValueArray;
                        class XYNumericFunction_RefValueArray;
                        class XYNumericFunction_SingleCellValueArray;
                        class XYNumericFunction_ValueArray;
                    } // functions
                } // formula
            } // ss
        } // poi
    } // apache
} // org
