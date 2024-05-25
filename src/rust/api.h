

// methods and associated functions for DataFusionRDataFrame
SEXP savvy_DataFusionRDataFrame_print__ffi(SEXP self__);
SEXP savvy_DataFusionRDataFrame_limit__ffi(SEXP self__, SEXP n, SEXP offset);
SEXP savvy_DataFusionRDataFrame_select_columns__ffi(SEXP self__, SEXP columns);
SEXP savvy_DataFusionRDataFrame_select__ffi(SEXP self__, SEXP exprs);
SEXP savvy_DataFusionRDataFrame_dim__ffi(SEXP self__);
SEXP savvy_DataFusionRDataFrame_names__ffi(SEXP self__);

// methods and associated functions for DataFusionRExpr
SEXP savvy_DataFusionRExpr_print__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_col__ffi(SEXP x);
SEXP savvy_DataFusionRExpr_lit__ffi(SEXP x);
SEXP savvy_DataFusionRExpr_add__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_sub__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_mul__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_div__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_reminder__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_lt__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_lt_eq__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_gt__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_gt_eq__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_eq__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_not_eq__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_and__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_or__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_bitand__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_bitor__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_bitxor__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_field__ffi(SEXP self__, SEXP name);
SEXP savvy_DataFusionRExpr_index__ffi(SEXP self__, SEXP key);
SEXP savvy_DataFusionRExpr_range__ffi(SEXP self__, SEXP start, SEXP stop);
SEXP savvy_DataFusionRExpr_like__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_not_like__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_ilike__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_not_ilike__ffi(SEXP self__, SEXP rhs);
SEXP savvy_DataFusionRExpr_between__ffi(SEXP self__, SEXP low, SEXP high);
SEXP savvy_DataFusionRExpr_not_between__ffi(SEXP self__, SEXP low, SEXP high);
SEXP savvy_DataFusionRExpr_alias__ffi(SEXP self__, SEXP name);
SEXP savvy_DataFusionRExpr_in_list__ffi(SEXP self__, SEXP list, SEXP negated);
SEXP savvy_DataFusionRExpr_neg__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_not__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_is_null__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_is_not_null__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_is_true__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_is_not_true__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_is_false__ffi(SEXP self__);
SEXP savvy_DataFusionRExpr_is_not_false__ffi(SEXP self__);

// methods and associated functions for DataFusionRExprs
SEXP savvy_DataFusionRExprs_new__ffi(SEXP capacity);
SEXP savvy_DataFusionRExprs_add_expr__ffi(SEXP self__, SEXP expr);
SEXP savvy_DataFusionRExprs_print__ffi(SEXP self__);

// methods and associated functions for DataFusionRSessionContext
SEXP savvy_DataFusionRSessionContext_new__ffi(void);
SEXP savvy_DataFusionRSessionContext_create_data_frame__ffi(SEXP self__, SEXP raw_stream, SEXP table_name);
SEXP savvy_DataFusionRSessionContext_sql__ffi(SEXP self__, SEXP sql);
SEXP savvy_DataFusionRSessionContext_register_parquet__ffi(SEXP self__, SEXP name, SEXP path, SEXP file_extension, SEXP parquet_pruning, SEXP skip_metadata);
SEXP savvy_DataFusionRSessionContext_register_csv__ffi(SEXP self__, SEXP name, SEXP path, SEXP has_header, SEXP delimiter, SEXP quote, SEXP escape, SEXP schema_infer_max_records, SEXP file_extension);

// methods and associated functions for RawArrayStream
SEXP savvy_RawArrayStream_new_without_init__ffi(void);